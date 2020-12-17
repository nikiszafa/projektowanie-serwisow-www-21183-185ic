import React, {Component} from 'react';
import {Paper, Typography, TextField, Button} from '@material-ui/core'
import {List, ListItem, ListItemText} from '@material-ui/core'
import {ListItemSecondaryAction, IconButton} from '@material-ui/core'
import {Delete} from '@material-ui/icons'
import {withStyles} from '@material-ui/core/styles'

const styles = {
    root: {margin: 20, padding: 20, maxWidth: 400},
    form: {display: 'flex', alignItems: 'baseline', justifyContent: 'space-evenly'}
}


export default withStyles(styles)(class App extends Component {

    handleChange = ({target: {name, value}}) => this.setState({[name]: value})

    handleCreate = e => {
        e.preventDefault()
        if (this.state.title) {
            this.setState(({exercises, title}) => ({exercises: [...exercises, {title, id: Date.now()}], title: ''}))
        }
    }
    handleDelete = id => this.setState(({exercises}) => ({exercises: exercises.filter(ex => ex.id !== id)}))

    state = {
        exercises: [{id: 1, title: 'Pajacyki'}, {id: 2, title: 'Martwy Ciąg'}, {id: 3, title: 'Przysiady'}],
        title: ''
    }

    render() {
        const {title, exercises} = this.state
        const {classes} = this.props;
        return <Paper className={classes.root}>
            <form onSubmit={this.handleCreate}>
                <Typography variant='h2' align='center' gutterBottom> Cwiczenia </Typography>
                <TextField name='title' label='Exercise' value={title} onChange={this.handleChange} margin='normal'/>
                <Button type='submit' color='primary' variant='contained'>Dodaj</Button>
            </form>
            <List>
                {
                    exercises.map(({id, title}) =>
                        <ListItem key={id}>
                            <ListItemText primary={title}/>
                            <ListItemSecondaryAction>
                                <IconButton color='primary'
                                            onClick={() => this.handleDelete(id)}>{/* ??? */}
                                    <Delete/>
                                </IconButton>
                            </ListItemSecondaryAction>
                        </ListItem>)
                }
            </List>
        </Paper>
    }
})

// render() {
//
//     return (<Typography variant='h1' align='center' gutterBottom> Exercises </Typography>)
// }




